//
//  Q7AppDelegate.h
//  Quiz7
//
//  Created by Jon Diehl on 4/9/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Q7AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
