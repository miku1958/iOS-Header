//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface DMFOSStateHandler : NSObject
{
    CDUnknownBlockType _block;
    NSString *_name;
    unsigned long long _handle;
    NSObject<OS_os_transaction> *_transaction;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (nonatomic) unsigned long long handle; // @synthesize handle=_handle;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;

- (void).cxx_destruct;
- (struct os_state_data_s *)_serializeState;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 name:(id)arg2 stateHandlerBlock:(CDUnknownBlockType)arg3;

@end

