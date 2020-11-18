//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IKViewElementStyleComposer, NSString;
@protocol IKStyleableElement, NSCopying;

@protocol IKStyleableElement

@property (readonly, copy, nonatomic) NSString *elementName;
@property (readonly, weak, nonatomic) id<IKStyleableElement> parentStyleableElement;
@property (strong, nonatomic) IKViewElementStyleComposer *styleComposer;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id<NSCopying>)arg2;
@end

