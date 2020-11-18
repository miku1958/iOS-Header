//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSCyclerBookmarkRepresentation.h>

@class NSURL;

@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerBookmarkRepresentation
{
    NSURL *_url;
}

@property (strong, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithURL:(id)arg1 title:(id)arg2 uniqueIdentifier:(id)arg3;
- (BOOL)isEquivalent:(id)arg1;

@end

