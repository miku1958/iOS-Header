//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNGroup.h>

@class NSString;

@interface CNMutableGroup : CNGroup
{
}

@property (nonatomic) int iOSLegacyIdentifier; // @dynamic iOSLegacyIdentifier;
@property (copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (copy, nonatomic) CNGroup *snapshot; // @dynamic snapshot;

- (void)adoptValuesFromAndSetSnaphot:(id)arg1;
- (id)copy;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;

@end

