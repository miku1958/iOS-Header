//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKDOperationInfoDelegate;

__attribute__((visibility("hidden")))
@interface CKDOperationInfoDelegateWrapper : NSObject
{
    id<CKDOperationInfoDelegate> _delegate;
    NSString *_personaID;
}

@property (weak, nonatomic) id<CKDOperationInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (void)performWithDelegate:(CDUnknownBlockType)arg1;

@end
