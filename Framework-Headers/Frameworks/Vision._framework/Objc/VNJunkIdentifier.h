//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNJunkIdentifier : VNDetector
{
    shared_ptr_b26ea6de mJunkDescriptorImpl;
    shared_ptr_047f28ed mJunkClassifierImpl;
}

+ (BOOL)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

