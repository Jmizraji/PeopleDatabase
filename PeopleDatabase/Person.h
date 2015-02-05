//
//  Person.h
//  PeopleDatabase
//
//  Created by Fahim Farook on 15/7/13.
//  Copyright (c) 2013 Fahim Farook. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject {
	NSString *firstName;
	NSString *lastName;
	int age;
}

- (void)enterInfo;
- (void)printInfo;

@end
