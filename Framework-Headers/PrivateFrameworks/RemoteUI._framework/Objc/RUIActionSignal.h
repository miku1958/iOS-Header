//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RUIActionSignal : NSObject
{
    unsigned long long _topSignal;
    NSMutableArray *_subActions;
}

@property (strong, nonatomic) NSMutableArray *subActions; // @synthesize subActions=_subActions;
@property (nonatomic) unsigned long long topSignal; // @synthesize topSignal=_topSignal;

+ (id)signalWithType:(unsigned long long)arg1;
+ (id)stringForActionSignal:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
