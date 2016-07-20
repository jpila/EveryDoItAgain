//
//  MasterViewController.h
//  EveryDoItAgain
//
//  Created by JOSE PILAPIL on 2016-07-20.
//  Copyright © 2016 JOSE PILAPIL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

