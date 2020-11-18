//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CVML/CVMLDetector.h>

@interface CVMLFaceprintGenerator : CVMLDetector
{
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> m_FaceDescriptorImpl;
    struct shared_ptr<vision::mod::FaceFrontalizer> m_FaceFrontalizerImpl;
    struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> m_DescriptorAugmenter;
    struct shared_ptr<unsigned char> m_FaceFrontalizerWorkingBuffer;
    struct vImage_Buffer m_FaceFrontalizerImageBuffer;
    struct _Geometry2D_size2D_ m_RequiredImageSize;
    BOOL _useLowPriorityMode;
    unsigned long long _metalContextPriority;
}

@property (readonly, nonatomic) unsigned long long length;

+ (BOOL)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeFromBuffer:(struct vImage_Buffer *)arg1 withChannels:(unsigned long long)arg2 error:(id *)arg3;
- (id)computeFromPixelBuffer:(struct __CVBuffer *)arg1 withChannels:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

