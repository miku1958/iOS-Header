//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BFFFlowDiverter;

@interface BFFFlowStarter : NSObject
{
    id<BFFFlowDiverter> _diverter;
}

@property (strong, nonatomic) id<BFFFlowDiverter> diverter; // @synthesize diverter=_diverter;

- (void).cxx_destruct;
- (BOOL)controllerNeedsToRunForClass:(Class)arg1;
- (id)initWithFlowDiverter:(id)arg1;

@end
