//
//  LoginViewController.h
//  Ribbit
//
//  Created by DarkCode on 1/11/14.
//  Copyright (c) 2014 CodeA2. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *usernameField;
@property (strong, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)login:(id)sender;


@end
