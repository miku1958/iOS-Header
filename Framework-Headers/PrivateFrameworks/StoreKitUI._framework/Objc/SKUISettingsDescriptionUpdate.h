//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface SKUISettingsDescriptionUpdate : NSObject
{
    NSArray *_indexPaths;
    NSIndexSet *_indexSet;
    long long _updateType;
}

@property (strong, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property (strong, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property (readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;

- (void).cxx_destruct;
- (id)initWithUpdateType:(long long)arg1;

@end
