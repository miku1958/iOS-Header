//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingNameCell : UITableViewCell
{
    long long _nameOrder;
    UIImage *_avatarImage;
    UITextField *_givenNameField;
    UITextField *_familyNameField;
    UIView *_fakeSeparator;
    UIImageView *_avatarImageView;
}

@property (strong, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property (strong, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property (strong, nonatomic) UIView *fakeSeparator; // @synthesize fakeSeparator=_fakeSeparator;
@property (copy, nonatomic) NSString *familyName;
@property (strong, nonatomic) UITextField *familyNameField; // @synthesize familyNameField=_familyNameField;
@property (copy, nonatomic) NSString *givenName;
@property (strong, nonatomic) UITextField *givenNameField; // @synthesize givenNameField=_givenNameField;
@property (nonatomic) long long nameOrder; // @synthesize nameOrder=_nameOrder;

+ (id)cellIdentifier;
+ (double)desiredMinimumCellHeight;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (double)separatorHeight;
- (void)setGivenNameField:(id)arg1 familyNameField:(id)arg2;
- (id)textFieldForIndex:(long long)arg1;

@end

