//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNModelFile-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNModelFileImpl : NSObject <VNModelFile>
{
    const struct mapped_model_file *m_impl;
}

@property (readonly, nonatomic) const void *baseAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) struct __sFILE *ptrFile;
@property (strong, nonatomic) NSString *resourcePath;
@property (readonly) Class superclass;

- (void)advise:(long long)arg1;
- (id)initWithMappedModel:(const struct mapped_model_file *)arg1;

@end

