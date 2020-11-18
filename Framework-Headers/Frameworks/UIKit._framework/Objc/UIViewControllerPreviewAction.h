//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSString;

@interface UIViewControllerPreviewAction : NSObject <NSCopying>
{
    NSString *_title;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

