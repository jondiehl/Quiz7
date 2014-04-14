//
//  Task.h
//  Quiz7
//
//  Created by Jon Diehl on 4/9/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Task : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic) float urgency;
@property (nonatomic, retain) NSDate * dueDate;

@end
