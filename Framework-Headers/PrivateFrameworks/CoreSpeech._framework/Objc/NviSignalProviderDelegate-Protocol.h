//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NviSignalData;
@protocol NviSignalProvider;

@protocol NviSignalProviderDelegate <NSObject>
- (void)signalProvider:(id<NviSignalProvider>)arg1 hasSignalData:(NviSignalData *)arg2;
@end
