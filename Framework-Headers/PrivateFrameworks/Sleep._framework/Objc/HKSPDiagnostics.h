//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKSPObserverSet, NSString;

@interface HKSPDiagnostics : NSObject
{
    NSString *_label;
    HKSPObserverSet *_providers;
}

@property (readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) HKSPObserverSet *providers; // @synthesize providers=_providers;

- (void).cxx_destruct;
- (void)_registerStateHandler;
- (void)addProvider:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (void)removeProvider:(id)arg1;

@end
