//
//  ViewController.h
//  Quick Start Tutorial
//
//  Created by Paymahn Moghadasian on 2013-07-22.
//  Copyright (c) 2013 Paymahn Moghadasian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>

@interface ViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate>


@property (weak, nonatomic) IBOutlet UILabel *firstName;

@property (weak, nonatomic) IBOutlet UILabel *phoneNumber;

- (IBAction)showPicker:(id)sender;
@end
