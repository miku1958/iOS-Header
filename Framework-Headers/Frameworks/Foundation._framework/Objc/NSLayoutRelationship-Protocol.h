//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol NSLayoutRelationship <NSObject, NSCopying>

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *relationshipDescription;

- (NSArray *)makeChildrenRelationships;
@end

