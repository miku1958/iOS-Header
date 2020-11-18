//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreChart/JSExport-Protocol.h>

@class CCVegaCSSStyleDeclaration, JSValue, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol CCVegaHTMLElementInterface;

@protocol CCVegaHTMLElementInterface <JSExport>

@property (strong, nonatomic) NSMutableArray *childNodes;
@property (nonatomic) double clientHeight;
@property (nonatomic) double clientWidth;
@property (strong, nonatomic) NSMutableDictionary *events;
@property (strong, nonatomic) NSObject<CCVegaHTMLElementInterface> *parentNode;
@property (strong, nonatomic) CCVegaCSSStyleDeclaration *style;
@property (strong, nonatomic) NSString *tagName;

- (void)addEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2;
- (NSObject<CCVegaHTMLElementInterface> *)appendWithChild:(JSValue *)arg1;
- (NSDictionary *)getBoundingClientRect;
- (id)initWithTagName:(NSString *)arg1;
- (NSObject<CCVegaHTMLElementInterface> *)prependWithChild:(JSValue *)arg1;
- (void)recursiveSetSize:(struct CGSize)arg1;
- (void)removeEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2;
- (NSObject<CCVegaHTMLElementInterface> *)removeWithChild:(JSValue *)arg1;
- (void)setAttributeWithName:(NSString *)arg1 value:(NSString *)arg2;

@optional
- (void)addEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2 __JS_EXPORT_AS__addEventListener:(id)arg3;
- (NSObject<CCVegaHTMLElementInterface> *)appendWithChild:(JSValue *)arg1 __JS_EXPORT_AS__appendChild:(id)arg2;
- (NSObject<CCVegaHTMLElementInterface> *)prependWithChild:(JSValue *)arg1 __JS_EXPORT_AS__prepend:(id)arg2;
- (void)removeEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2 __JS_EXPORT_AS__removeEventListener:(id)arg3;
- (NSObject<CCVegaHTMLElementInterface> *)removeWithChild:(JSValue *)arg1 __JS_EXPORT_AS__removeChild:(id)arg2;
- (void)setAttributeWithName:(NSString *)arg1 value:(NSString *)arg2 __JS_EXPORT_AS__setAttribute:(id)arg3;
@end
