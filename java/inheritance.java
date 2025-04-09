class Device {
    protected String type = "Smartphone";
    public void powerOn() {
      System.out.println("Device is now on!");
    }
  }
  
  class Phone extends Device {
    private String model = "Galaxy S25";
  
    public static void main(String[] args) {
      Phone myPhone = new Phone();
      myPhone.powerOn();
      System.out.println(myPhone.type + " " + myPhone.model);
    }
  }