//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFRemoteUserInterface-Protocol.h>

@class NSSet;

@protocol WFSelectPhotoActionUserInterface <WFRemoteUserInterface>
- (void)showWithPhotoPickerTypes:(NSSet *)arg1 selectMultiple:(BOOL)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end

