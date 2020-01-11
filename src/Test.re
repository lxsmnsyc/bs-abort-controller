/**
 * Create an AbortController
 */
let controller = AbortController.make();

/**
 * Get the AbortSignal from the controller
 */
let signal = AbortController.signal(controller);

/**
 * Register a listener to the AbortSignal
 */
signal->AbortSignal.addEventListener("abort", () => {
  Js.log("Aborted");
});

signal->AbortSignal.addEventListener("abort", () => {
  Js.log("Aborted as well");
});

/**
 * Abort the controller
 */
AbortController.abort(controller);