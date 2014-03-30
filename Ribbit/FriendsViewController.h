//
//  FriendsViewController.h
//  Ribbit
//
//  Created by DarkCode on 1/12/14.
//  Copyright (c) 2014 CodeA2. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end
