//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOServerFormattedStepStringFormatter-Protocol.h>

@class NSString;

@interface MNNanoFormattedStringFormatter : NSObject <GEOServerFormattedStepStringFormatter>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedFormatter;
- (id)listInstructionForStep:(id)arg1;
- (id)signInstructionsForStep:(id)arg1;

@end
