//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class BBSectionIcon, BBSectionInfo, NSData, NSString;

@protocol BBSectionIdentity <NSObject>
- (NSString *)sectionIdentifier;

@optional
- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)parentSectionIdentifier;
- (NSString *)sectionDisplayName;
- (BBSectionIcon *)sectionIcon;
- (NSData *)sectionIconData;
- (NSString *)universalSectionIdentifier;
@end

