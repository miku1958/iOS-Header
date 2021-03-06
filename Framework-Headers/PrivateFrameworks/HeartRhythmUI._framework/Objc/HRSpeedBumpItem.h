//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HRSpeedBumpItem : NSObject
{
    NSString *_title;
    NSString *_body;
    NSArray *_bubbles;
    id _delegate;
}

@property (readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property (readonly, nonatomic) NSArray *bubbles; // @synthesize bubbles=_bubbles;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 body:(id)arg2 bubbles:(id)arg3;

@end

