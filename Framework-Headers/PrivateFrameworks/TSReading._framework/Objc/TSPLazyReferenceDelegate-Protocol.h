//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSPLazyReference, TSPObject;

@protocol TSPLazyReferenceDelegate <NSObject>
- (TSPObject *)objectForIdentifier:(long long)arg1;

@optional
- (void)lazyReference:(TSPLazyReference *)arg1 didCreateCopy:(TSPLazyReference *)arg2;
@end

