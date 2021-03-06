//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCSController, NSString;

@interface MMCSRequestorContext : NSObject
{
    MMCSController *_controller;
    NSString *_transferID;
}

@property (readonly, strong) MMCSController *controller; // @synthesize controller=_controller;
@property (readonly, strong) NSString *transferID; // @synthesize transferID=_transferID;

- (void)dealloc;
- (id)initWithController:(id)arg1 transferID:(id)arg2;
- (void)removeFromController;

@end

