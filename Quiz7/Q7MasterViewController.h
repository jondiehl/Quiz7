//
//  Q7MasterViewController.h
//  Quiz7
//
//  Created by Jon Diehl on 4/9/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface Q7MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
