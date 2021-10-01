using SQLite4Unity3d;

public class Stock
{

	[PrimaryKey, AutoIncrement]
	public int Id { get; set; }
	public string Name { get; set; }
	public string Tipe { get; set; }
	public int Quantity { get; set; }



	public override string ToString()
	{
		return string.Format(" Stock: Id- {0}, \r\n Название - {1}, \r\n Тип - {2},\r\n Количество - {3}", Id, Name, Tipe, Quantity);
	}
}