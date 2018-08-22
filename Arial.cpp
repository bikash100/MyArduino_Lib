Class Arial {
	private :
		int size;		// relative size of each letter
		int w_speed;	// relative writting speed of motor
		String text;	// stores which text to type
		int space_c,space_w,space_l;	// sets relative spacing b/w letters,words and lines
	
//------ constructor to set which text to type-------//
	
	Arial(String name) {
		text = name ;
	}	
	
//------ method to set relative spacing b/w letters ONLY
	
	void setSpace(int c) {
		space_c = c;
	}
	
/------ method to set relative spacing b/w letters and words
	
	void setSpace(int c,int w) {
		space_c = c;
		space_w = w;
	}
	
//------ method to set relative spacing b/w letters,words and lines
	
	void setSpace(int c,int w,int l) {
		space_c = c;
		space_w = w;
		space_l = l;
	}
	
/******* method that define and control relative motors speeds for typing this 
	particular type of font *********/
	
	void write() {
		
		for(int i=0;text[i]!='\0';i++) {
			
		}
	}
}






















