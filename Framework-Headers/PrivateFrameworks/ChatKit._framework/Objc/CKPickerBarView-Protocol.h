//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol CKPickerBarView <NSObject>

@property (copy, nonatomic) NSArray *acknowledgmentViews;

- (id)initWithGroupCounts:(NSDictionary *)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3;
- (void)performCancelAnimation:(void (^)(void))arg1;
- (void)performSelectedAnimation:(void (^)(void))arg1;
- (void)performSendAnimation:(void (^)(void))arg1;
- (void)performShowAnimation:(void (^)(void))arg1;
@end

