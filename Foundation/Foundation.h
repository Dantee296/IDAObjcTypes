#import "../Types.h"
#import "../CoreGraphics/Types.h"
#import "Types.h"

CGFloat NSWidth(NSRect aRect);
CGFloat NSHeight(NSRect aRect);
CGFloat NSMaxX(NSRect aRect);
CGFloat NSMidX(NSRect aRect);
CGFloat NSMinX(NSRect aRect);
CGFloat NSMaxY(NSRect aRect);
CGFloat NSMidY(NSRect aRect);
CGFloat NSMinY(NSRect aRect);

NSUInteger NSRoundUpToMultipleOfPageSize(NSUInteger bytes);
NSUInteger NSPageSize(void);

NSString *NSStringFromClass(Class aClass);
NSString *NSStringFromProtocol(Protocol *proto);
NSString *NSStringFromBOOL(BOOL theBOOL);
NSString *NSStringFromSelector(SEL aSelector);
NSString *NSStringFromPoint(NSPoint aPoint);
NSString *NSStringFromSize(NSSize aSize);
NSString *NSStringFromRect(NSRect aRect);
NSString *NSStringFromRange(NSRange range);
NSString *NSStringFromCGRect(CGRect rect);
NSString *NSStringFromCGSize(CGSize size);
NSString *NSStringFromCGPoint(CGPoint point);
NSString *NSStringFromCGAffineTransform(CGAffineTransform t);
NSString *NSStringFromUIEdgeInsets(UIEdgeInsets insets);
NSString *NSStringFromUIOffset(UIOffset offset);
NSString *NSHomeDirectory(void);
NSString *NSTemporaryDirectory(void);
NSString *NSOpenStepRootDirectory(void);

NSDictionary *_NSDictionaryOfVariableBindings(NSString *commaSeparatedKeysString, id firstValue, ...);

NSArray *NSSearchPathForDirectoriesInDomains(NSSearchPathDirectory directory, NSSearchPathDomainMask domainMask, BOOL expandTilde);

NSRect NSUnionRect(NSRect aRect, NSRect bRect);
NSRect NSInsetRect(NSRect aRect, CGFloat dX, CGFloat dY);
NSRect NSIntegralRect(NSRect aRect);
NSRect NSIntegralRectWithOptions(NSRect aRect, NSAlignmentOptions opts);
NSRect NSIntersectionRect(NSRect aRect, NSRect bRect);
NSRect NSMakeRect(CGFloat x, CGFloat y, CGFloat w, CGFloat h);
NSRect NSRectFromString(NSString *aString);

NSPoint NSPointFromString(NSString *aString);

NSRange NSUnionRange(NSRange range1, NSRange range2);
NSRange NSIntersectionRange(NSRange range1, NSRange range2);

BOOL NSPointInRect(NSPoint aPoint, NSRect aRect);
BOOL NSContainsRect(NSRect aRect, NSRect bRect);
BOOL NSEqualRects(NSRect aRect, NSRect bRect);
BOOL NSEqualSizes(NSSize aSize, NSSize bSize);
BOOL NSEqualPoints(NSPoint aPoint, NSPoint bPoint);
BOOL NSIsEmptyRect(NSRect aRect);
BOOL NSIntersectsRect(NSRect aRect, NSRect bRect);
BOOL NSIntersectsRange(NSRange aRange, NSRange bRange);
BOOL NSMapMember(NSMapTable *table, const void *key, void **originalKey, void **value);
BOOL NSNextMapEnumeratorPair(NSMapEnumerator *enumerator, void **key, void **value);

Class NSClassFromString(CFStringRef string);

SEL NSSelectorFromString(NSString *aSelectorName);

Protocol *NSProtocolFromString(NSString *namestr);

NSMapEnumerator NSEnumerateMapTable(NSMapTable *table);

NSMapTable *NSCreateMapTable(NSMapTableKeyCallBacks keyCallBacks, NSMapTableValueCallBacks valueCallBacks, NSUInteger capacity);
NSMapTable *NSCreateMapTableWithZone(NSMapTableKeyCallBacks keyCallBacks, NSMapTableValueCallBacks valueCallBacks, NSUInteger capacity, NSZone *zone);

NSZone *NSZoneFromPointer(void *ptr);

unsigned NSHashCString(unsigned char *str, int n);
unsigned __NSHashCString(void *table, const void *anObject);

const char *NSGetSizeAndAlignment(const char *typePtr, NSUInteger *sizep, NSUInteger *alignp);

void *NSPushAutoreleasePool(NSUInteger capacity);
void *NSZoneMalloc(NSZone *zone, NSUInteger size);
void *NSZoneRealloc(NSZone *zone, void *ptr, NSUInteger size);
void *NSZoneCalloc(NSZone *zone, NSUInteger numElems, NSUInteger byteSize);
void *NSReallocateCollectable(void *ptr, NSUInteger size, NSUInteger options);
void *NSMapInsertIfAbsent(NSMapTable *table, const void *key, const void *value);
void *NSMapGet(NSMapTable *table, const void *key);
void *NSNextHashEnumeratorItem(NSHashEnumerator *enumerator);

id NSAllocateObject(Class aClass, NSUInteger extraBytes, NSZone *zone);

NSArray *NSAllMapTableKeys(NSMapTable *table);
NSArray *NSAllMapTableValues(NSMapTable *table);

NSUncaughtExceptionHandler *NSGetUncaughtExceptionHandler(void);

void NSLogv(NSString *format, va_list args);
void NSRequestConcreteImplementation(id self, SEL _cmd, Class absClass);
void NSPopAutoreleasePool(void *token);
void NSDivideRect(NSRect inRect, NSRect *slice, NSRect *rem, CGFloat amount, NSRectEdge edge);
void NSLog(NSString *format, ...);
void NSZoneFree(NSZone *zone, void *ptr);
void NSMapInsert(NSMapTable *table, const void *key, const void *value);
void NSMapInsertKnownAbsent(NSMapTable *table, const void *key, const void *value);
void NSMapRemove(NSMapTable *table, const void *key);
void NSFreeMapTable(NSMapTable *table);
void NSEndMapTableEnumeration(NSMapEnumerator *enumerator);
void NSDeallocateObject(id object);
void NSSetUncaughtExceptionHandler(NSUncaughtExceptionHandler *);