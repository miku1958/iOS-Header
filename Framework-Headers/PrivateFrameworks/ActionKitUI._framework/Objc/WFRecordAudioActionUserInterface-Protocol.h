//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/WFRemoteUserInterface-Protocol.h>

@protocol WFRecordAudioActionUserInterface <WFRemoteUserInterface>
- (void)showWithOutputFormat:(long long)arg1 startImmediately:(BOOL)arg2 recordingDuration:(double)arg3 completionHandler:(void (^)(WFFileRepresentation *, NSError *))arg4;
@end

