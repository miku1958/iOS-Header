//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerCore/NSCopying-Protocol.h>
#import <DocumentManagerCore/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber;

@interface DOCUserInterfaceState : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_mostRecentlyVisitedLocation;
    NSData *_mostRecentEffectiveRootLocation;
    NSNumber *_displayMode;
    NSDictionary *_sortingMode;
    NSNumber *_browseTabSelected;
    NSNumber *_userPrefersTiledSidebarHidden;
    NSDate *_lastUpdatedDate;
}

@property (strong, nonatomic) NSNumber *browseTabSelected; // @synthesize browseTabSelected=_browseTabSelected;
@property (strong, nonatomic) NSNumber *displayMode; // @synthesize displayMode=_displayMode;
@property (strong, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property (strong, nonatomic) NSData *mostRecentEffectiveRootLocation; // @synthesize mostRecentEffectiveRootLocation=_mostRecentEffectiveRootLocation;
@property (strong, nonatomic) NSData *mostRecentlyVisitedLocation; // @synthesize mostRecentlyVisitedLocation=_mostRecentlyVisitedLocation;
@property (strong, nonatomic) NSDictionary *sortingMode; // @synthesize sortingMode=_sortingMode;
@property (strong, nonatomic) NSNumber *userPrefersTiledSidebarHidden; // @synthesize userPrefersTiledSidebarHidden=_userPrefersTiledSidebarHidden;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)bumpLastUpdatedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

