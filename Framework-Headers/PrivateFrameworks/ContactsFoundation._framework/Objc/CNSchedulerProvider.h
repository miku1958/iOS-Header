//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNSchedulerProvider-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface CNSchedulerProvider : NSObject <CNSchedulerProvider>
{
    id<CNScheduler> _backgroundScheduler;
    id<CNScheduler> _mainThreadScheduler;
    id<CNScheduler> _inlineScheduler;
    id<CNScheduler> _immediateScheduler;
    CDUnknownBlockType _serialSchedulerProvider;
    CDUnknownBlockType _synchronousSerialSchedulerProvider;
    CDUnknownBlockType _readerWriterSchedulerProvider;
}

@property (readonly, nonatomic) id<CNScheduler> backgroundScheduler; // @synthesize backgroundScheduler=_backgroundScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNScheduler> immediateScheduler; // @synthesize immediateScheduler=_immediateScheduler;
@property (readonly, nonatomic) id<CNScheduler> inlineScheduler; // @synthesize inlineScheduler=_inlineScheduler;
@property (readonly, nonatomic) id<CNScheduler> mainThreadScheduler; // @synthesize mainThreadScheduler=_mainThreadScheduler;
@property (readonly, copy, nonatomic) CDUnknownBlockType readerWriterSchedulerProvider; // @synthesize readerWriterSchedulerProvider=_readerWriterSchedulerProvider;
@property (readonly, copy, nonatomic) CDUnknownBlockType serialSchedulerProvider; // @synthesize serialSchedulerProvider=_serialSchedulerProvider;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CDUnknownBlockType synchronousSerialSchedulerProvider; // @synthesize synchronousSerialSchedulerProvider=_synchronousSerialSchedulerProvider;

+ (id)defaultProvider;
+ (id)makeDefaultProvider;
+ (id)providerWithBackgroundConcurrencyLimit:(long long)arg1;
- (void).cxx_destruct;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(CDUnknownBlockType)arg4 synchronousSerialSchedulerProvider:(CDUnknownBlockType)arg5 readerWriterSchedulerProvider:(CDUnknownBlockType)arg6;
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 inlineScheduler:(id)arg3 immediateScheduler:(id)arg4 serialSchedulerProvider:(CDUnknownBlockType)arg5 synchronousSerialSchedulerProvider:(CDUnknownBlockType)arg6 readerWriterSchedulerProvider:(CDUnknownBlockType)arg7;
- (id)newReaderWriterSchedulerWithName:(id)arg1;
- (id)newSerialSchedulerWithName:(id)arg1;
- (id)newSynchronousSerialSchedulerWithName:(id)arg1;

@end

