//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/UIApplicationExtensionActivity.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSArray, NSString, UIImage;

@interface UIShortcutActivity : UIApplicationExtensionActivity <NSSecureCoding>
{
    NSString *_identifier;
    UIImage *_iconImage;
    NSString *_singleUseToken;
    NSString *_name;
    NSArray *_photosAssetIdentifiers;
}

@property (strong, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSArray *photosAssetIdentifiers; // @synthesize photosAssetIdentifiers=_photosAssetIdentifiers;
@property (strong, nonatomic) NSString *singleUseToken; // @synthesize singleUseToken=_singleUseToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_actionImage;
- (long long)_defaultSortGroup;
- (id)activityTitle;
- (id)activityType;
- (void)encodeWithCoder:(id)arg1;
- (id)initPartialShortcutFromXPCHelperWithName:(id)arg1 identifier:(id)arg2 image:(id)arg3;
- (id)initWithApplicationExtension:(id)arg1 singleUseToken:(id)arg2 photosAssetIdentifiers:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPartial:(id)arg1;
- (void)prepareWithActivityExtensionItemData:(id)arg1;

@end
