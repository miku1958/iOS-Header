//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSString;
@protocol CNReaderWriterScheduler, CNScheduler;

@protocol CNSchedulerProvider <NSObject>

@property (readonly, nonatomic) id<CNScheduler> backgroundScheduler;
@property (readonly, nonatomic) id<CNScheduler> immediateScheduler;
@property (readonly, nonatomic) id<CNScheduler> inlineScheduler;
@property (readonly, nonatomic) id<CNScheduler> mainThreadScheduler;

- (id<CNScheduler>)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
- (id<CNReaderWriterScheduler>)newReaderWriterSchedulerWithName:(NSString *)arg1;
- (id<CNScheduler>)newSerialSchedulerWithName:(NSString *)arg1;
- (id<CNScheduler>)newSynchronousSerialSchedulerWithName:(NSString *)arg1;
@end

