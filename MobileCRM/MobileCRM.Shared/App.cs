using System;
using Xamarin.Forms;
using MobileCRM.Shared.Pages;

namespace MobileCRM
{
	public class App : Application
	{
		public static Worklight.IWorklightClient WorklightClient { get; set;} 
		public App ()
		{
			MainPage = new RootPage();
		}
	}
}

