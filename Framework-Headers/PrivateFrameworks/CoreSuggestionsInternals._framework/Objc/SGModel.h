//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SGModelSource;
@protocol PMLMultiLabelClassifierProtocol, PMLTransformerProtocol;

@interface SGModel : NSObject
{
    id<PMLMultiLabelClassifierProtocol> _model;
    id<PMLTransformerProtocol> _featurizer;
    SGModelSource *_modelSource;
    NSString *_locale;
}

@property (readonly) id<PMLTransformerProtocol> featurizer; // @synthesize featurizer=_featurizer;
@property (readonly, copy) NSString *locale; // @synthesize locale=_locale;
@property (readonly) id<PMLMultiLabelClassifierProtocol> model; // @synthesize model=_model;
@property (readonly) SGModelSource *modelSource; // @synthesize modelSource=_modelSource;

+ (id)featurize:(id)arg1;
+ (Class)modelClassForObjective:(unsigned long long)arg1;
+ (id)newTransformerInstanceForLanguage:(id)arg1;
+ (id)trainingFeaturesOf:(id)arg1 inLanguage:(id)arg2;
+ (id)trainingFeaturesOf:(id)arg1 inLanguage:(id)arg2 withObjective:(unsigned long long)arg3;
+ (id)transformerInstanceForLanguage:(id)arg1;
+ (id)transformerInstanceForLanguage:(id)arg1 withObjective:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 locale:(id)arg2 featurizer:(id)arg3 modelSource:(id)arg4;
- (id)predictForInput:(id)arg1;
- (id)trainingFeaturesOf:(id)arg1;

@end
