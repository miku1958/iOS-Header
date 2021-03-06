//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRTextRecognizerModelInput-Protocol.h>

@class NSArray, NSString;

@interface CRTextRecognizerModelEspressoInput : NSObject <CRTextRecognizerModelInput>
{
    NSArray *_textFeatureInfo;
    unsigned long long _batchSize;
    struct vImage_Buffer _img_input;
}

@property unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct vImage_Buffer img_input; // @synthesize img_input=_img_input;
@property (readonly) Class superclass;
@property (strong) NSArray *textFeatureInfo; // @synthesize textFeatureInfo=_textFeatureInfo;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImg_input:(struct vImage_Buffer)arg1 batchSize:(unsigned long long)arg2 featureInfo:(id)arg3;

@end

