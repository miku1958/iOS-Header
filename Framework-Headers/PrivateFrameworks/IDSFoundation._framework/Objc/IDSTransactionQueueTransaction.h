//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSTransactionQueueTransaction : NSObject
{
    BOOL _readyToExecute;
    id _item;
}

@property (strong, nonatomic) id item; // @synthesize item=_item;
@property (nonatomic) BOOL readyToExecute; // @synthesize readyToExecute=_readyToExecute;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 readyToExecute:(BOOL)arg2;

@end

