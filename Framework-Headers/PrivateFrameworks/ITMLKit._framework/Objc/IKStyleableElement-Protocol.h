//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IKViewElementStyleComposer, NSString;
@protocol IKStyleableElement;

@protocol IKStyleableElement

@property (readonly, copy, nonatomic) NSString *elementName;
@property (readonly, weak, nonatomic) id<IKStyleableElement> parentStyleableElement;
@property (strong, nonatomic) IKViewElementStyleComposer *styleComposer;

@end

