//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICAttachmentBrickInfo : NSObject
{
    BOOL _titleLight;
    BOOL _detail1Dark;
    NSString *_titleString;
    NSString *_detail1String;
    NSString *_detail2String;
}

@property (nonatomic) BOOL detail1Dark; // @synthesize detail1Dark=_detail1Dark;
@property (copy, nonatomic) NSString *detail1String; // @synthesize detail1String=_detail1String;
@property (copy, nonatomic) NSString *detail2String; // @synthesize detail2String=_detail2String;
@property (nonatomic) BOOL titleLight; // @synthesize titleLight=_titleLight;
@property (copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;

- (void).cxx_destruct;

@end

