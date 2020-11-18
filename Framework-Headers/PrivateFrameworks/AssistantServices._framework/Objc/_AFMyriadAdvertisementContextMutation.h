//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFMyriadAdvertisementContextMutating-Protocol.h>

@class AFMyriadAdvertisementContext, NSData, NSString;

@interface _AFMyriadAdvertisementContextMutation : NSObject <AFMyriadAdvertisementContextMutating>
{
    AFMyriadAdvertisementContext *_baseModel;
    unsigned long long _generation;
    NSData *_contextData;
    double _contextFetchDelay;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasContextData:1;
        unsigned int hasContextFetchDelay:1;
    } _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setContextData:(id)arg1;
- (void)setContextFetchDelay:(double)arg1;
- (void)setGeneration:(unsigned long long)arg1;

@end
