//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject
{
    NSMutableDictionary *_children;
    long long _childCount;
}

@property (nonatomic) long long childCount; // @synthesize childCount=_childCount;
@property (readonly, nonatomic) NSMutableDictionary *children; // @synthesize children=_children;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

