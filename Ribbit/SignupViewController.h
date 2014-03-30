//
//  SignupViewController.h
//  Ribbit
//
//  Created by DarkCode on 1/11/14.
//  Copyright (c) 2014 CodeA2. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignupViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *usernameField;
@property (strong, nonatomic) IBOutlet UITextField *passwordField;
@property (strong, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)signup:(id)sender;
- (IBAction)dismiss:(id)sender;

@end
