//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/MLCustomModel-Protocol.h>

@class NSString;

@interface PPSanitizedStringFilter : NSObject <MLCustomModel>
{
    NSString *_inputName;
    NSString *_outputName;
}

- (void).cxx_destruct;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
