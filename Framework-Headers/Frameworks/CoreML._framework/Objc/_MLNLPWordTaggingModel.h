//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLCustomModel-Protocol.h>

@class MLModelDescription;

__attribute__((visibility("hidden")))
@interface _MLNLPWordTaggingModel : NSObject <MLCustomModel>
{
    void *_wordTaggingModel;
    MLModelDescription *_modelDescription;
}

@property (strong) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

