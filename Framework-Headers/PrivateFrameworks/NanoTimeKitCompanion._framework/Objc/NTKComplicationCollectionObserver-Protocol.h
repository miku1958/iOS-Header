//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSString, NTKComplicationCollection;

@protocol NTKComplicationCollectionObserver <NSObject>

@optional
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didRemoveSampleTemplatesForClient:(NSString *)arg2;
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didUpdateSampleTemplateForClient:(NSString *)arg2;
- (void)complicationCollectionDidLoad:(NTKComplicationCollection *)arg1;
@end
