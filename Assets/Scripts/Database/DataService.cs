using SQLite4Unity3d;
using UnityEngine;
#if !UNITY_EDITOR
using System.Collections;
using System.IO;
#endif
using System.Collections.Generic;

public class DataService : MonoBehaviour
{
   public int requestID=0;

    private SQLiteConnection _connection;

   

    public DataService(string DatabaseName){

#if UNITY_EDITOR
            var dbPath = string.Format(@"Assets/StreamingAssets/{0}", DatabaseName);
#else
        // check if file exists in Application.persistentDataPath
        var filepath = string.Format("{0}/{1}", Application.persistentDataPath, DatabaseName);

        if (!File.Exists(filepath))
        {
            Debug.Log("Database not in Persistent path");
            // if it doesn't ->
            // open StreamingAssets directory and load the db ->

#if UNITY_ANDROID 
            var loadDb = new WWW("jar:file://" + Application.dataPath + "!/assets/" + DatabaseName);  // this is the path to your StreamingAssets in android
            while (!loadDb.isDone) { }  // CAREFUL here, for safety reasons you shouldn't let this while loop unattended, place a timer and error check
            // then save to Application.persistentDataPath
            File.WriteAllBytes(filepath, loadDb.bytes);
#elif UNITY_IOS
                 var loadDb = Application.dataPath + "/Raw/" + DatabaseName;  // this is the path to your StreamingAssets in iOS
                // then save to Application.persistentDataPath
                File.Copy(loadDb, filepath);
#elif UNITY_WP8
                var loadDb = Application.dataPath + "/StreamingAssets/" + DatabaseName;  // this is the path to your StreamingAssets in iOS
                // then save to Application.persistentDataPath
                File.Copy(loadDb, filepath);

#elif UNITY_WINRT
		var loadDb = Application.dataPath + "/StreamingAssets/" + DatabaseName;  // this is the path to your StreamingAssets in iOS
		// then save to Application.persistentDataPath
		File.Copy(loadDb, filepath);
		
#elif UNITY_STANDALONE_OSX
		var loadDb = Application.dataPath + "/Resources/Data/StreamingAssets/" + DatabaseName;  // this is the path to your StreamingAssets in iOS
		// then save to Application.persistentDataPath
		File.Copy(loadDb, filepath);
#else
	var loadDb = Application.dataPath + "/StreamingAssets/" + DatabaseName;  // this is the path to your StreamingAssets in iOS
	// then save to Application.persistentDataPath
	File.Copy(loadDb, filepath);

#endif

            Debug.Log("Database written");
        }

        var dbPath = filepath;
#endif
            _connection = new SQLiteConnection(dbPath, SQLiteOpenFlags.ReadWrite | SQLiteOpenFlags.Create);
            Debug.Log("Final PATH: " + dbPath);     

	}

    internal object GetStocksID()
    {
        throw new System.NotImplementedException();
    }

    internal object GetStocksID(object p)
    {
        throw new System.NotImplementedException();
    }

    
    //начало моего класса найти сток 
    public IEnumerable<Stock> GetStock()
	{
		return _connection.Table<Stock>();
	}

    public IEnumerable<Stock> GetStocks()
    {

        return _connection.Table<Stock>().Where(x => x.Id == requestID);


    }
    public string CreateNewName;
    public string CreateNewTipe;
    public int CreateNewQuantity;

    public Stock CreateNewStock()
    {
        var p = new Stock
        {
            Name = CreateNewName,
            Tipe = CreateNewTipe,
            Quantity = CreateNewQuantity
        };
        _connection.Insert(p);
        return p;
    }

    public int CreateId;
    public string CreateName;
    public string CreateTipe;
    public int CreateQuantity;
    public void CreateDB(){
            _connection.DropTable<Stock> ();
            _connection.CreateTable<Stock> ();

            _connection.InsertAll (new[]{
                new Stock{
                    Id = CreateId,
                    Name = CreateName,
                    Tipe = CreateTipe,
                    Quantity = CreateQuantity
                },
        
            });
      }
    


    public string requestName;
    public IEnumerable<Stock> GetStocksDlink()
    {
        return _connection.Table<Stock>().Where(x => x.Name == requestName);
    }
    public string GetNamed;
	public IEnumerable<Stock> GetStockNamed(){
		return _connection.Table<Stock>().Where(x => x.Name == GetNamed);
	}

    public int replaceId;
    public string Name;
    public string Tipe;
    public int Quantity;
    public void replaseData() {
        
        _connection.Update<Stock>();
        _connection.Insert(new[]{
            new Stock{
            Id = replaceId,
            Name = Name,
            Tipe = Tipe,
            Quantity = Quantity
            }



        });

    }

}
